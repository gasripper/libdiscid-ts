/* eslint-disable @typescript-eslint/no-explicit-any */
import * as nbind from 'nbind';

import { fileURLToPath } from 'url';
import { default as path } from 'path';

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

nbind.init(__dirname, (err: any, binding: nbind.Binding<any>) => {
	if(err) throw(err);
	const lib = binding.lib;
	console.log('Platform: ' + lib.DiscId.getRuntimeEnv());
});

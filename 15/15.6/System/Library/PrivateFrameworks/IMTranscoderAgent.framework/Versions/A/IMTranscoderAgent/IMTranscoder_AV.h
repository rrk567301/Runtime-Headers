@interface IMTranscoder_AV : IMTranscoder

+ (id)supportedUTIs;

- (unsigned long long)_fileSizeForTransfer:(id)a0;
- (char)_isHEVCVideo:(id)a0;
- (void)_transcodeVideoAsync:(id)a0 target:(long long)a1 maxBytes:(unsigned long long)a2 isAnimojiV2:(char)a3 removeAlpha:(char)a4 preserveHDR:(char)a5 isAA:(char)a6 preserveAA:(char)a7 userInfo:(id)a8 completionHandler:(id /* block */)a9;
- (void)_transcodeVideoPassThrough:(id)a0 completionHandler:(id /* block */)a1;
- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5 commonCapabilities:(id)a6;
- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 isAnimojiV2:(char)a5 removeAlpha:(char)a6 isHDR:(char)a7 preserveHDR:(char)a8 isAA:(char)a9 preserveAA:(char)a10 fileSizeLimit:(unsigned long long)a11;
- (void)transcodeFileTransfer:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 isLQMEnabled:(char)a9 completionBlock:(id /* block */)a10;

@end

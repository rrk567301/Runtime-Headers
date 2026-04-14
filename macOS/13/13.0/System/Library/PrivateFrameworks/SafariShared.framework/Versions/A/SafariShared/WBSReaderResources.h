@interface WBSReaderResources : NSObject

+ (id)readerHTMLSourceURL;
+ (id)localizedStringsScriptURL;
+ (struct OpaqueJSScript { } *)articleFinderScriptForContext:(struct OpaqueJSContext { } *)a0;
+ (struct OpaqueJSScript { } *)sharedUIScriptForContext:(struct OpaqueJSContext { } *)a0;
+ (struct OpaqueJSScript { } *)sharedUINormalWorldScriptForContext:(struct OpaqueJSContext { } *)a0;

@end

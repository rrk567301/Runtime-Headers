@class NSString;

@interface WBSReaderResources : NSObject

@property (class, readonly, nonatomic) NSString *articleFinderScript;
@property (class, readonly, nonatomic) NSString *sharedScript;
@property (class, readonly, nonatomic) NSString *sharedUIScript;

+ (struct OpaqueJSScript { } *)articleFinderScriptForContext:(struct OpaqueJSContext { } *)a0;
+ (id)localizedStringsScriptURL;
+ (id)readerHTMLSourceURL;
+ (struct OpaqueJSScript { } *)sharedScriptForContext:(struct OpaqueJSContext { } *)a0;
+ (struct OpaqueJSScript { } *)sharedUINormalWorldScriptForContext:(struct OpaqueJSContext { } *)a0;
+ (struct OpaqueJSScript { } *)sharedUIScriptForContext:(struct OpaqueJSContext { } *)a0;

@end

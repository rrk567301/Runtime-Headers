@class NSURL;

@interface CNCDIOSLegacyIdentifierRegistrarOnDiskPropertyListPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence>

@property (retain, nonatomic) NSURL *url;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)state;
- (char)saveState:(id)a0 error:(id *)a1;

@end

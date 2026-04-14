@class NSURL;

@interface CNCDIOSLegacyIdentifierRegistrarOnDiskPropertyListPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence>

@property (retain, nonatomic) NSURL *url;

+ (id)log;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)state;
- (BOOL)saveState:(id)a0 error:(id *)a1;

@end

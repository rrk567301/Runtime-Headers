@class NSURL;

@interface CNCDIOSLegacyIdentifierRegistrarOnDiskPropertyListPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence>

@property (retain, nonatomic) NSURL *url;

+ (id)log;

- (id)state;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveState:(id)a0 error:(id *)a1;

@end

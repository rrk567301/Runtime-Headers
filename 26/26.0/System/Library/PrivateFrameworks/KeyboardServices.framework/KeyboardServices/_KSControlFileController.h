@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (void)setContents:(id)a0;
- (void)reset;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)contents;
- (id)description;
- (BOOL)checkIfExists;
- (void).cxx_destruct;

@end

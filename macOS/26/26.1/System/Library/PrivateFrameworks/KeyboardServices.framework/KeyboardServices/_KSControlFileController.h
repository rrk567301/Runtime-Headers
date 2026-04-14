@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)contents;
- (void)setContents:(id)a0;
- (BOOL)checkIfExists;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)description;
- (void)reset;
- (void).cxx_destruct;

@end

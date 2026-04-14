@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)contents;
- (void)setContents:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)checkIfExists;
- (id)description;

@end

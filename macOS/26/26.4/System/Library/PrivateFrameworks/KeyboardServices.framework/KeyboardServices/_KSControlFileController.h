@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (void)setContents:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)contents;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (BOOL)checkIfExists;

@end

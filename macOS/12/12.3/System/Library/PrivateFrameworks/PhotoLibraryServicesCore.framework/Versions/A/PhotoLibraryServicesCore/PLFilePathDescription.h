@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithFileURL:(id)a0;
+ (id)descriptionWithPath:(id)a0;

- (id)description;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;

@end

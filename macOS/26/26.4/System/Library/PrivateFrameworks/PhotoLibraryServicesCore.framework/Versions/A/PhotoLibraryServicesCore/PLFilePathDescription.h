@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithPath:(id)a0;
+ (id)descriptionWithFileURL:(id)a0;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)redactedDescription;

@end

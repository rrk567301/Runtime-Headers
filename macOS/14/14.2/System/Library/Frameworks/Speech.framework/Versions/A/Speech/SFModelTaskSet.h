@class NSSet;

@interface SFModelTaskSet : NSObject {
    NSSet *_taskNames;
}

+ (id)set;
+ (id)taskSetWithAssetPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)tasks;
- (BOOL)containsBeto;
- (BOOL)containsBetoDictation;
- (BOOL)containsDictation;
- (BOOL)containsDictationCC;
- (BOOL)containsSearchOrMessaging;
- (BOOL)containsSiriDictation;
- (BOOL)containsTshot;
- (BOOL)containsWebSearch;
- (id)initWithTaskNames:(id)a0;
- (BOOL)supportsAssistant;

@end

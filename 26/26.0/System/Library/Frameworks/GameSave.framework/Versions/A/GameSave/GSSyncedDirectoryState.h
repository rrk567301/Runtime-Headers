@class NSURL, NSArray, NSError;

@interface GSSyncedDirectoryState : NSObject {
    void /* function */ internalValue;
}

@property (nonatomic, readonly) id internalValue;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSArray *conflictedVersions;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long state;

- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 syncState:(long long)a1;

@end

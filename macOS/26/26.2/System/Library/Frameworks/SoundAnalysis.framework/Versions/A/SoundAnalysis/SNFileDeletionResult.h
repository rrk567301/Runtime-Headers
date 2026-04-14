@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)init;

@end

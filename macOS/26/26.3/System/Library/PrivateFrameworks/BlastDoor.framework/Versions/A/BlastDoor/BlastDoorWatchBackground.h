@class NSString, BlastDoorImage;

@interface BlastDoorWatchBackground : NSObject {
    void /* unknown type, empty encoding */ watchBackground;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *backgroundImage;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly) BOOL isHighKey;
@property (nonatomic, readonly) NSString *extensionIdentifier;

- (id)init;
- (void).cxx_destruct;

@end

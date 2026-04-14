@class NSString;

@interface LAVolumeOwnership : NSObject {
    void /* function */ volumePath;
}

@property (nonatomic, readonly) NSString *volumePath;
@property (nonatomic, readonly) BOOL confirmed;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)makeVolumeOwnershipWithVolumePath:(id)a0 confirmed:(BOOL)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVolumePath:(id)a0 confirmed:(BOOL)a1;

@end

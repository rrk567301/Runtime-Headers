@interface VUWGalleryObservationIdentifier : NSObject

@property (nonatomic, readonly) long long value;
@property (nonatomic, readonly) long long hash;

- (id)initWithValue:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

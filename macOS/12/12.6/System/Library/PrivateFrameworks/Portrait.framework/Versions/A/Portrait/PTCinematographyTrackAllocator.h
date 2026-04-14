@interface PTCinematographyTrackAllocator : NSObject

@property (nonatomic) long long trackIdentifier;

- (id)initWithTrackIdentifier:(long long)a0;
- (long long)nextTrackIdentifier;
- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)a0;

@end

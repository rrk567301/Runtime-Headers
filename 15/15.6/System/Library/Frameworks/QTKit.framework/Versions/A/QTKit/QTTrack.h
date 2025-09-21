@interface QTTrack : NSObject

+ (id)trackWithProxy:(int)a0;
+ (id)allReadableAttributeKeysForVisibility:(unsigned long long)a0;
+ (id)allWritableAttributeKeysForVisibility:(unsigned long long)a0;
+ (id)attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction;
+ (id)attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction;
+ (id)trackWithTrackID:(long long)a0 error:(id *)a1 andMovie:(id)a2;

- (id)init;
- (id)initWithProxy:(int)a0;
- (id)initWithTrackID:(long long)a0 error:(id *)a1 andMovie:(id)a2;
- (id)initWithTrackHelper:(id)a0 error:(id *)a1;

@end

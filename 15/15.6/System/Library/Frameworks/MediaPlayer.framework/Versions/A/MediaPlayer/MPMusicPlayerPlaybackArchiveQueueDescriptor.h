@class MPPlaybackArchive;

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, copy, nonatomic) MPPlaybackArchive *playbackArchive;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackArchive:(id)a0;

@end

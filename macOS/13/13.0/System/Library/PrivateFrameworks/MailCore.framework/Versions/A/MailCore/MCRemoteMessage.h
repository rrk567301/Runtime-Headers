@interface MCRemoteMessage : MCMessage

@property (nonatomic) BOOL isPartial;
@property (nonatomic) BOOL partsHaveBeenCached;
@property (nonatomic) unsigned long long messageSize;

- (id)initWithSize:(unsigned long long)a0;
- (BOOL)isMessageContentLocallyAvailable;

@end

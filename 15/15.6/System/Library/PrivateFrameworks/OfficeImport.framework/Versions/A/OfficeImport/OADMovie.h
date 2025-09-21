@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia

@property (retain) NSData *data;
@property (retain) NSString *name;
@property char isAudioOnly;
@property char loop;
@property float movieStartPoint;
@property float movieEndPoint;

- (id)description;
- (void).cxx_destruct;

@end

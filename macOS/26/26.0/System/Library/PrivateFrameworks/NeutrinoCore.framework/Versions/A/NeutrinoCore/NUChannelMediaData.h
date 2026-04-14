@protocol NUMedia;

@interface NUChannelMediaData : NUChannelData

@property (readonly, nonatomic) id<NUMedia> media;

+ (id)asset:(id)a0;
+ (id)containerMediaDataWithFormat:(id)a0 components:(id)a1 error:(out id *)a2;
+ (id)media:(id)a0;
+ (id)mediaDataWithCIImage:(id)a0;
+ (id)mediaDataWithCIImage:(id)a0 type:(long long)a1;
+ (id)mediaDataWithCIImage:(id)a0 type:(long long)a1 orientation:(long long)a2;

- (id)value;
- (id)debugDescription;
- (id)description;
- (id)initWithFormat:(id)a0;
- (void).cxx_destruct;
- (id)initWithMedia:(id)a0;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end

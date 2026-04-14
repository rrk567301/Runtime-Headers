@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement

@property (nonatomic) long long songPart;
@property (copy, nonatomic) NSString *songPartText;
@property (retain, nonatomic) NSArray *lines;

+ (long long)_songPartForText:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

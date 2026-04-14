@class MSVLyricsAgent, NSString;

@interface MSVLyricsElement : MSVLyricsXMLElement

@property (nonatomic) long long type;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) MSVLyricsAgent *agent;
@property (retain, nonatomic) NSString *role;
@property (nonatomic) BOOL isBackgroundVocal;

+ (id)_descriptionForElementType:(long long)a0;

- (void).cxx_destruct;
- (id)description;

@end

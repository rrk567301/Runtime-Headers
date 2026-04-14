@class NSString, MPCPlayerAudioFormat, NSDictionary;

@interface MPCPlayerAudioFormatSelection : NSObject

@property (retain, nonatomic) MPCPlayerAudioFormat *format;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSDictionary *justification;

- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 justification:(id)a1;

@end

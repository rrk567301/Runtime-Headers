@class NSArray;

@interface PSInteractionPattern : NSObject

@property (retain, nonatomic) NSArray *timePatterns;
@property (retain, nonatomic) NSArray *contentPatterns;
@property (retain, nonatomic) NSArray *contentTags;
@property (nonatomic) long long frequency;

- (void).cxx_destruct;
- (id)initWithTimePatterns:(id)a0 contentPatterns:(id)a1 contentTags:(id)a2 frequency:(long long)a3;

@end

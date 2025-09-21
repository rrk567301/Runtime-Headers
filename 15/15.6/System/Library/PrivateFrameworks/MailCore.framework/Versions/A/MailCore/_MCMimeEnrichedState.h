@class NSString, NSColor;

@interface _MCMimeEnrichedState : NSObject

@property (nonatomic) unsigned char excerptLevel;
@property (nonatomic) long long alignment;
@property (nonatomic) char bold;
@property (nonatomic) char italic;
@property (nonatomic) char fixed;
@property (nonatomic) char underline;
@property (nonatomic) short fontDelta;
@property (copy, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;

@end

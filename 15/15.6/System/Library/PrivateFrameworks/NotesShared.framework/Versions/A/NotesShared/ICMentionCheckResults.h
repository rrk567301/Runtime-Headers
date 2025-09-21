@class NSSet, NSString;

@interface ICMentionCheckResults : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfMention;
@property (nonatomic) char isPartialMention;
@property (nonatomic) char isExplicitMention;
@property (nonatomic) char isAllMention;
@property (copy, nonatomic) NSSet *matchingParticipants;
@property (copy, nonatomic) NSString *mentionString;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end

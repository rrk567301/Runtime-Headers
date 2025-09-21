@class NSNumber, NSString, SLPerson;

@interface SLDHighlightDisambiguationPillSlotTag : SLDSlotTag

@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (retain, nonatomic) SLPerson *sender;
@property (nonatomic) char isGroupConversation;
@property (retain, nonatomic) NSString *groupDisplayName;
@property (retain, nonatomic) NSNumber *otherRecipientCount;
@property (nonatomic, getter=isPinned) char pinned;
@property (nonatomic, getter=isFromMe) char fromMe;

+ (id)tagForHighlightAttribution:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)initWithHighlightAttribution:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2;

@end

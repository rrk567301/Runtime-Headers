@class UISSlotStyle, SLDSlotTag;

@interface SLDRemoteViewIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style;
@property (retain, nonatomic) SLDSlotTag *tag;

+ (id)identifierForStyle:(id)a0 tag:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end

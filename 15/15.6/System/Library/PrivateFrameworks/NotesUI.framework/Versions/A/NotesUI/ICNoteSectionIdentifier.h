@class NSDictionary, NSArray, NSString;
@protocol ICItemIdentifier;

@interface ICNoteSectionIdentifier : NSObject <ICSectionIdentifier>

@property (class, readonly, nonatomic) NSDictionary *titles;
@property (class, readonly, copy, nonatomic) NSArray *sortDescriptors;

@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) char containsRelevantIdentifiers;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isCollapsible) char collapsible;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithNoteSectionType:(long long)a0;
- (char)isEqualToICNoteSectionIdentifier:(id)a0;

@end

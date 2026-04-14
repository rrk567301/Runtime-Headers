@class SCRElementHashMarker, NSString, SCRElement, SCRCIndexMap;

@interface _SCRSearchData : NSObject

@property (retain, nonatomic) SCRElement *originalElement;
@property (nonatomic) long long originalElementRoleHash;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) long long searchAttribute;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } startRange;
@property (nonatomic) long long direction;
@property (nonatomic) long long result;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } foundRange;
@property (retain, nonatomic) SCRElementHashMarker *wrappedMarker;
@property (nonatomic) BOOL didWrap;
@property (retain, nonatomic) SCRCIndexMap *textAttributes;
@property (nonatomic) unsigned long long textMarkerMask;

- (void).cxx_destruct;

@end

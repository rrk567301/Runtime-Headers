@class NSString, NSArray, NSURL, NSDate;

@interface PPEventHighlight : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSURL *externalURI;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *organizer;
@property (nonatomic) struct CGColor { } *calendarColor;
@property (nonatomic) unsigned long long prominentFeature;
@property (retain, nonatomic) NSArray *features;
@property (nonatomic) double score;
@property (nonatomic) char isExtraordinary;

+ (id)describeProminentFeature:(unsigned long long)a0;
+ (id)eventHighlightWithEKEvent:(id)a0 score:(double)a1 prominentFeature:(unsigned long long)a2 features:(id)a3 isExtraordinary:(char)a4;
+ (id)eventHighlightWithEvent:(id)a0 score:(double)a1 prominentFeature:(unsigned long long)a2 features:(id)a3 isExtraordinary:(char)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventIdentifier:(id)a0 externalURI:(id)a1 title:(id)a2 startDate:(id)a3 endDate:(id)a4 location:(id)a5 organizer:(id)a6 calendarColor:(struct CGColor { } *)a7 prominentFeature:(unsigned long long)a8 features:(id)a9 score:(double)a10 isExtraordinary:(char)a11;
- (char)isEqualToEventHighlight:(id)a0;

@end

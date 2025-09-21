@class NSString, NSDate;

@interface GDMicroLocationVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *microLocationIdentifier;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) char isEnter;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 microLocationIdentifier:(id)a1 probability:(double)a2 isEnter:(char)a3;

@end

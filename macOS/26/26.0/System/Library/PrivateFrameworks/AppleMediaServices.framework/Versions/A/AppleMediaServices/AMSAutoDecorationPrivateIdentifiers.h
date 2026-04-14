@class NSDate;

@interface AMSAutoDecorationPrivateIdentifiers : NSObject {
    void /* unknown type, empty encoding */ beginTimeInterval;
    void /* unknown type, empty encoding */ identifiers;
}

@property (nonatomic, readonly) NSDate *beginDate;

+ (id)autoDecorationDictionaryForEvent:(id)a0 privateIdentifiers:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBeginDate:(id)a0 identifiers:(id)a1;

@end

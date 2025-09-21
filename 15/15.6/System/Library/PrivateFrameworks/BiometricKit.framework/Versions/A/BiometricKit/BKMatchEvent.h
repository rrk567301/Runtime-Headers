@class BKIdentity;

@interface BKMatchEvent : NSObject

@property (nonatomic) char result;
@property (nonatomic) unsigned long long timeStamp;
@property (retain, nonatomic) BKIdentity *matchedIdentity;

+ (id)matchEventWithDictionary:(id)a0 device:(id)a1 error:(id *)a2;

- (void).cxx_destruct;

@end

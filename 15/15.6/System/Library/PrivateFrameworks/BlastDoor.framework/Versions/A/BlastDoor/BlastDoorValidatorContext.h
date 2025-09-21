@class NSString;

@interface BlastDoorValidatorContext : NSObject {
    void /* unknown type, empty encoding */ validatorContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) char isBusiness;

- (id)init;
- (id)initForBusinessChat:(char)a0;

@end

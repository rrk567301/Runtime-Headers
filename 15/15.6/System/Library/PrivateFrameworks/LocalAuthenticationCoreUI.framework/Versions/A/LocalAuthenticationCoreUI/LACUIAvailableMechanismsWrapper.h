@class NSArray;

@interface LACUIAvailableMechanismsWrapper : NSObject {
    NSArray *_mechanismEvents;
}

@property (readonly, nonatomic) char allowsPasscode;
@property (readonly, nonatomic) char allowsBiometry;
@property (readonly, nonatomic) char allowsWatch;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithMechanismEvents:(id)a0;

@end

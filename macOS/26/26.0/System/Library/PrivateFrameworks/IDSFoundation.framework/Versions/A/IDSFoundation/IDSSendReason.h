@class NSString;

@interface IDSSendReason : NSObject {
    void /* function */ pathID;
}

@property (nonatomic) long long reason;
@property (nonatomic) long long subreason;
@property (nonatomic, copy) NSString *pathID;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGenericReason:(long long)a0 genericSubreason:(long long)a1 genericPathID:(id)a2;
- (id)initWithReason:(long long)a0 subreason:(long long)a1 pathID:(long long)a2;

@end

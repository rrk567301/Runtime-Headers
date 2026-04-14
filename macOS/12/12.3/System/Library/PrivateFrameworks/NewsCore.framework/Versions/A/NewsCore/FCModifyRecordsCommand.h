@class NSArray;

@interface FCModifyRecordsCommand : FCCommand {
    BOOL _merge;
    id /* block */ _localRecordsGenerator;
    NSArray *_localRecords;
}

@property (readonly, nonatomic) NSArray *t_localRecords;

+ (BOOL)supportsSecureCoding;
+ (id)desiredKeys;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithLocalRecords:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (id)initWithLocalRecordsGenerator:(id /* block */)a0 merge:(BOOL)a1;

@end

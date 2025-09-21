@class USOSerializedGraph, NSString, SIRINLURRGroupIdentifier, NSArray;

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *entity;
@property double score;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SIRINLURRGroupIdentifier *groupId;
@property (retain, nonatomic) NSArray *annotations;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntity:(id)a0 score:(double)a1;
- (id)initWithEntity:(id)a0 score:(double)a1 entityId:(id)a2 appBundleId:(id)a3 groupId:(id)a4 annotations:(id)a5;

@end

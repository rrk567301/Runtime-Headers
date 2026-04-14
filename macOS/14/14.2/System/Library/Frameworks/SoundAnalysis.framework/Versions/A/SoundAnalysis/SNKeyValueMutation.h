@class NSString;

@interface SNKeyValueMutation : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ keyPath;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ value;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initAdditionOfKeyPath:(id)a0 value:(id)a1;
- (id)initAssignmentOfKeyPath:(id)a0 value:(id)a1;
- (id)initRemovalOfKeyPath:(id)a0;
- (id)initUpdateOfKeyPath:(id)a0 value:(id)a1;
- (BOOL)isEqualToKeyValueMutation:(id)a0;

@end

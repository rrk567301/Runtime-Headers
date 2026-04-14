@class NSString, NSDate;

@interface FAProfileAccount : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ profileName;
    void /* unknown type, empty encoding */ altDSID;
    void /* unknown type, empty encoding */ memberDisplayLabel;
    void /* unknown type, empty encoding */ memberTypeString;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *profileName;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dsid;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ canRemoveSelf;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ askToBuyEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ memberSortOrder;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ memberJoinDateEpoch;
@property (nonatomic, readonly) NSString *memberDisplayLabel;
@property (nonatomic, readonly) NSString *memberTypeString;
@property (nonatomic, readonly) long long memberTypeInt;
@property (nonatomic, readonly) NSDate *joinedDate;
@property (nonatomic, readonly) NSString *description;

+ (id)profileAccountFrom:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProfileName:(id)a0 altDSID:(id)a1 dsid:(long long)a2 canRemoveSelf:(BOOL)a3 askToBuyEnabled:(BOOL)a4 memberSortOrder:(long long)a5 memberJoinDateEpoch:(double)a6 memberDisplayLabel:(id)a7 memberType:(id)a8;

@end

@class NSString, NSArray;

@interface SUCoreRestoreVersion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *restoreVersionString;
@property (retain, nonatomic) NSArray *parsedVersion;
@property (nonatomic) long long buildGroup;
@property (readonly, nonatomic) long long majorVersion;
@property (readonly, nonatomic) long long minorVersion;
@property (readonly, nonatomic) long long buildVersion;
@property (readonly, nonatomic) long long syncedVersion;
@property (readonly, nonatomic) long long suffixVersion;

+ (char)_enableVerboseLogging;
+ (id)_stringForNSComparisonResult:(long long)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithRestoreVersion:(id)a0;
- (char)isComparable:(id)a0;
- (char)_isStringOnlyNumbers:(id)a0;
- (void)_parseRestoreVersionString;
- (id)getNextNearestRestoreVersionOf:(id)a0 and:(id)a1;

@end

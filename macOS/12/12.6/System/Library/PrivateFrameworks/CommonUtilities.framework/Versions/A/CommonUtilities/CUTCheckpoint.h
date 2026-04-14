@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {
    BOOL _frozen;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL assertsUseAfterFreeze;
@property (nonatomic) BOOL shouldLogTouches;

+ (id)_allowlistedClasses;
+ (id)_reportDateFormatter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)report;
- (void)freeze;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)_assertNotFrozen;
- (BOOL)isFrozen;
- (void)_freeze;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (id)_reportName;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (id)_reportMetadata;
- (id)_freezeBacktrace;

@end

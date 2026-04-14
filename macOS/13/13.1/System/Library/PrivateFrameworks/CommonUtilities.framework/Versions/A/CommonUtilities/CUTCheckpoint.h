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

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)report;
- (void)freeze;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (void)_freeze;
- (BOOL)isFrozen;
- (BOOL)_assertNotFrozen;
- (id)_freezeBacktrace;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (id)_reportMetadata;
- (id)_reportName;
- (id)_reportStartDate;
- (id)_reportEndDate;

@end

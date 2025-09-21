@class NSArray;

@interface ISyncConjunctionFilter : NSObject <ISyncFiltering> {
    NSArray *_filters;
    NSArray *_supportedEntityNames;
    char _isAndConjunction;
    char _shouldApplyUnsupportedRecords;
    char _ignoreLocals;
}

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFilters:(id)a0 isAndConjunction:(char)a1 shouldApplyUnsupportedRecords:(char)a2;
- (void)_computeSupportedEntityNames;
- (id)initWithFilters:(id)a0 isAndConjunction:(char)a1 shouldApplyUnsupportedRecords:(char)a2 ignoreLocalRecords:(char)a3;
- (char)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;

@end

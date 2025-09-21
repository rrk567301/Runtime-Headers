@class NSString;

@interface TSCERefNamingContext : NSObject <NSCopying>

@property (retain, nonatomic) NSString *contextSheetName;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hostTableUID;
@property (nonatomic) char suppressIdenticalEndReference;
@property (nonatomic) char useSymbolicNames;
@property (nonatomic) char allowTableName;
@property (nonatomic) char allowSpanningColumnReferenceBodyQualifier;
@property (nonatomic) char showGeometricAsBase;
@property (nonatomic) char quoteComponents;
@property (nonatomic) char forceEscaping;
@property (nonatomic) char forceTableName;
@property (nonatomic) char forceSheetName;
@property (nonatomic) char forFormulaPlainText;
@property (nonatomic) char usedSymbolicName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end

@class NSSet, NSObject;
@protocol OS_os_log;

@interface _BGTaskIdentifierRegistry : NSObject <NSCopying> {
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSSet *permittedIdentifiers;
@property (readonly, nonatomic) NSSet *permittedContinuedProcessingBaseNotationIdentifiers;

+ (id)registryWithContentsFromPlist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentsFromPlist;
- (id)initWithPermittedIdentifiers:(id)a0;
- (BOOL)isIdentifierValidContinuedProcessingBaseNotation:(id)a0;
- (BOOL)isIdentifierValidContinuedProcessingComposedNotation:(id)a0;
- (BOOL)isIdentifierValidContinuedProcessingWildcardNotation:(id)a0;
- (BOOL)isPermissibleFullyComposedIdentifier:(id)a0;

@end

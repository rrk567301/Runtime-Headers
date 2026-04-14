@interface ISS_DMDAVPropFind : ISS_DMDAVPropertiesRequest {
    BOOL _includeParent;
    BOOL _returnDictionary;
}

+ (id)propFindWithSession:(id)a0 withDepth:(id)a1 URI:(id)a2 lookingForProps:(id)a3 includingParent:(BOOL)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalizeOperation;
- (void)setResultsReturnedInDictionary:(BOOL)a0;
- (id)initPropFindWithSession:(id)a0 withDepth:(id)a1 URI:(id)a2 lookingForProps:(id)a3 includingParent:(BOOL)a4;

@end

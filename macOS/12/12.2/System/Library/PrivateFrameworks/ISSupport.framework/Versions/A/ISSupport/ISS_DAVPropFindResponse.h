@class NSMutableDictionary;

@interface ISS_DAVPropFindResponse : ISS_DAVMultiStatusResponse {
    NSMutableDictionary *categorizedProperties;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)propertyForKey:(id)a0;
- (id)creationDate;
- (id)properties;
- (id)getDisplayName;
- (BOOL)isFolder;
- (BOOL)isCollection;
- (BOOL)handleResponseSubnode:(id)a0;
- (id)propertiesWithStatusCode:(int)a0;
- (int)statusCodeForKey:(id)a0;
- (id)_getPropertyForKey:(id)a0;
- (long long)getContentLength;
- (id)ressourceType;

@end

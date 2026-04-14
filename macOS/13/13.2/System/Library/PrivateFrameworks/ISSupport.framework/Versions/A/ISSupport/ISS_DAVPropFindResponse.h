@class NSMutableDictionary;

@interface ISS_DAVPropFindResponse : ISS_DAVMultiStatusResponse {
    NSMutableDictionary *categorizedProperties;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)propertyForKey:(id)a0;
- (id)creationDate;
- (id)properties;
- (BOOL)isFolder;
- (id)getDisplayName;
- (BOOL)isCollection;
- (BOOL)handleResponseSubnode:(id)a0;
- (id)propertiesWithStatusCode:(int)a0;
- (int)statusCodeForKey:(id)a0;
- (id)_getPropertyForKey:(id)a0;
- (long long)getContentLength;
- (id)ressourceType;

@end

@class NSMutableDictionary;

@interface ISS_DAVPropFindResponse : ISS_DAVMultiStatusResponse {
    NSMutableDictionary *categorizedProperties;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)propertyForKey:(id)a0;
- (id)creationDate;
- (BOOL)isFolder;
- (id)properties;
- (id)getDisplayName;
- (BOOL)isCollection;
- (id)_getPropertyForKey:(id)a0;
- (long long)getContentLength;
- (BOOL)handleResponseSubnode:(id)a0;
- (id)propertiesWithStatusCode:(int)a0;
- (id)ressourceType;
- (int)statusCodeForKey:(id)a0;

@end

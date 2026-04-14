@class NSMutableDictionary;

@interface WBSWebExtensionInspectorData : NSObject <NSSecureCoding, NSCopying> {
    BOOL _readOnly;
    NSMutableDictionary *_inspectedWindowTabIDMap;
    NSMutableDictionary *_inspectorThemeNameMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setInspectorThemeName:(id)a0 forInspectorRelatedPageWithHandle:(id)a1;
- (void)setInspectedWindowTabID:(long long)a0 forInspectorRelatedPageWithHandle:(id)a1;
- (void)forgetInspectorRelatedPageWithHandle:(id)a0;
- (id)currentThemeNameForInspectorRelatedPageWithHandle:(id)a0;
- (id)readOnlyCopy;
- (id)inspectedWindowTabIDForInspectorRelatedPageWithHandle:(id)a0;

@end

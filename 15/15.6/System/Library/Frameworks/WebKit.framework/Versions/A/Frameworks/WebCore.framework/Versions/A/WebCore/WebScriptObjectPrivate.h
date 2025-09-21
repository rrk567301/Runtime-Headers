@interface WebScriptObjectPrivate : NSObject {
    void *imp;
    void *rootObject;
    void *originRootObject;
    char isCreatedByDOMWrapper;
}

@end

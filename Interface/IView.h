//
//  IView.h
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#ifndef IView_h
#define IView_h

namespace QFramework {
    
    class IView
    {
    public:
        IView();
        virtual ~IView() = 0;
        
    protected:
        virtual void setupView() = 0;
        virtual void updateView() = 0;
    };

}

#endif /* IView_h */
